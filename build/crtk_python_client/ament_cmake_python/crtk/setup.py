from setuptools import find_packages
from setuptools import setup

setup(
    name='crtk',
    version='1.4.0',
    packages=find_packages(
        include=('crtk', 'crtk.*')),
)
