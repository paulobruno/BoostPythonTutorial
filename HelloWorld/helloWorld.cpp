#include <Python.h>
#include <boost/python.hpp>


char const* greet()
{
   return "hello, world";
}


BOOST_PYTHON_MODULE(HelloWorld)
{
    using namespace boost::python;
    def("greet", greet);
}
