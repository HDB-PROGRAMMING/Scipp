# Scippy setup.py by
# Henry Diaz
#
# MIT Licensed

import setuptools

with open("README.md", "r") as fh:
    long_description = fh.read()
#end

setuptools.setup(
    name='Scippy',
    version='1.0.0',
    author='Henry Diaz',
    author_email='hdbprogramming@gmail.com',
    description='Scipp python API',
    long_description=long_description,
    long_description_content_type='text/markdown',
    url='https://github.com/HDB-PROGRAMMING/Scipp',
    packages=setuptools.find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Framework :: OS Independent",
    ],
    python_requires='>=3.6',
)