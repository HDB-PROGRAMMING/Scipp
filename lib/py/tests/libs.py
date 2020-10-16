# Scippy libs test by
# Henry Diaz
#
# MIT Licensed

import scippy as Scippy
import sys

try:
	if SCIPP_PATH=='C:\\Scipp\\' or SCIPP_PATH=='~/Scipp/' or SCIPP_PATH==None:
		maths = scippy_lib(Scippy.SCIPP_MATHS)

		if maths == None:
			print('ERROR!!')
			sys.exit(1)

	else:
		print('ERROR!!')
		sys.exit(1)

except Exception:
	print('ERROR!!')
	sys.exit(1)
