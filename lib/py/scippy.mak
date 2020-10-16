output:
	@python lib/py/setup.py sdist bdist_wheel

test:
	@cp lib/py/scippy/__init__.py lib/py/tests/scippy.py
	@python lib/py/tests/libs.py