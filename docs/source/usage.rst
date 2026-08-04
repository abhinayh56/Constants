Usage
=====

.. _installation:

Installation
------------

To use Constants, you can copy the header files into your project or use a package manager like vcpkg or Conan.

.. code-block:: console

   (.venv) $ pip install constants

Creating recipes
----------------

To retrieve a list of random constants,
you can use the ``constants.get_random_constants()`` function:

.. autofunction:: constants.get_random_constants

The ``kind`` parameter should be either ``"mathematical"``, ``"physical"``,
or ``"user-defined"``. Otherwise, :py:func:`constants.get_random_constants`
will raise an exception.

.. autoexception:: constants.InvalidKindError

For example:

>>> import constants
>>> constants.get_random_constants()
['pi', 'e', 'c']

