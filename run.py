import os
from subprocess import call
from sys import argv

if not len(argv)==5:
	print "Simple Usage:\n python run.py macros/analysisClass_HFPhaseScan.C config/input_lists/simple_list.txt config/tree_lists/treelist.txt output.root"
	print "2-input type Usage:\n python run.py macros/analysisClass_uHBHECommissioning.C config/input_lists/main_input.txt config/tree_lists/tree_list.txt output.root"
	exit(1)
else:
	if os.path.lexists("src/analysisClass.C"):
		if os.path.lexists("src/analysisClass.o"):
			os.remove("src/analysisClass.o")
			print("Removed old analysisClass.o")
		os.remove("src/analysisClass.C")
		print("Removed old analysisClass.C")
	print("Making new symlink analysisClass.C")
	os.symlink("../%s"%argv[1],"src/analysisClass.C")
	exitcode = call("make")
	if not exitcode==0:
		print "Compile failed ... "
	else:	
		call(["./main",argv[2],argv[3],argv[4]])
