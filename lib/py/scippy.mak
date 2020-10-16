output:
	@python lib/py/setup.py sdist bdist_wheel

test:
	@cp scippy/__init__.py tests/
	@python tests/libs.py