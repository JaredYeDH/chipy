#pragma once

#ifdef USE_GEO

#include <chipy/chipy.h>

namespace chipy
{

class GeoModule : public chipy::Module
{
public:
    GeoModule(chipy::MemoryManager &mem) 
        : chipy::Module(mem)
    {}

    chipy::ValuePtr get_member(const std::string &name) override;
};

}

#endif
