/* THIS FILE AUTO-GENERATED FROM StreamServiceProxyBase.cpp.lpp. DO NOT EDIT. */
#ifndef STREAMSERVICEPROXYBASE_H
#define STREAMSERVICEPROXYBASE_H

#include <sensekit_core.h>

struct StreamServiceProxyBase
{
    void* streamService;

    sensekit_status_t (*open_frame)(void*^PARAM-TYPES^);
	
    sensekit_status_t (*close_frame)(void*^PARAM-TYPES^);
	
    sensekit_status_t (*initialize)(void*^PARAM-TYPES^);
	
    sensekit_status_t (*terminate)(void*^PARAM-TYPES^);
	
};

#endif /* STREAMSERVICEPROXYBASE_H */