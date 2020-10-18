# Scippy - Scipp python API by
# Henry Diaz
#
# MIT Licensed

from ctypes import *
import os

if os.name == "ce" or os.name == "nt" or os.name == "dos":
	SCIPP_PATH  = 'C:\\Scipp\\'
	SCIPP_MATHS = 'maths.dll'
	SCIPP_TYPES = 'types.dll'

elif os.name == 'posix':
	SCIPP_PATH  = '~/Scipp/'
	SCIPP_MATHS = 'maths.so'
	SCIPP_TYPES = 'types.so'

else:
	SCIPP_PATH  = None
	SCIPP_MATHS = None
#Scippy consts

class scippy_lib:
	lib = None

	def __init__(self, lib):
		self.lib = cdll.LoadLibrary(SCIPP_PATH + lib)
	#end

	def lib(self):
		return self.lib
	#end

#Scippy library class
