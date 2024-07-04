from setuptools import setup, Extension

module = Extension('sum_of_squares_c_api', sources=['sum_of_squares_c_api.c'])

setup(name='sum_of_squares_c_api',
      ext_modules=[module])
