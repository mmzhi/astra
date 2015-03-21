#ifndef SENSEKIT_CAPI_H
#define SENSEKIT_CAPI_H

#include "sensekit_core.h"
#include "sensekit_types.h"

SENSEKIT_BEGIN_DECLS

SENSEKIT_API void sensekit_initialize();

SENSEKIT_API void sensekit_terminate();

SENSEKIT_API sensekit_status_t sensekit_open_streamset(
    const char* connection_string,
    /*out*/ sensekit_streamset_t** streamset);

SENSEKIT_API sensekit_status_t sensekit_close_streamset(
    sensekit_streamset_t** streamset);

SENSEKIT_API char * sensekit_get_status_string(sensekit_status_t status);

SENSEKIT_API sensekit_status_t sensekit_stream_open(
    sensekit_streamset_t* streamset,
    sensekit_stream_t** stream);

SENSEKIT_API sensekit_status_t sensekit_stream_close(
    sensekit_stream_t** stream);

SENSEKIT_API sensekit_status_t sensekit_stream_frame_open(
    sensekit_stream_t* stream,
    int timeout_milliseconds,
    sensekit_frame_t** frame); //0 = return immediately

SENSEKIT_API sensekit_status_t sensekit_stream_frame_close(
    sensekit_frame_t** frame); //frame set to null

SENSEKIT_API sensekit_status_t sensekit_temp_update();

SENSEKIT_END_DECLS



#endif /* SENSEKIT_CAPI_H */