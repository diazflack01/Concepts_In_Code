# Concepts In Code

This is a practice branch for CMakeLists.txt and class static data members

CMakeLists:
-shows how to enable C++11

DummyClass
 -Initializing value of class static member can be done either in .hpp declaration or .cpp definition
 -When class static member is not defined, and there's code that uses/gets reference of class static member, compilation will succeed BUT linking will fail with `undefined reference`
