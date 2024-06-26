from setuptools import setup
from Cython.Build import cythonize

setup(
    name='sum_of_squares_cython',
    ext_modules=cythonize("sum_of_squares_cython.pyx"),
)