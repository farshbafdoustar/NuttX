// Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _MICRORTPS_CLIENT_CORE_SESSION_INPUT_BEST_EFFORT_STREAM_H_
#define _MICRORTPS_CLIENT_CORE_SESSION_INPUT_BEST_EFFORT_STREAM_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <micro-xrce-dds/client/core/session/seq_num.h>

#include <stdint.h>
#include <stdbool.h>

typedef struct mrInputBestEffortStream
{
    mrSeqNum last_handled;

} mrInputBestEffortStream;

void init_input_best_effort_stream(mrInputBestEffortStream* stream);
void reset_input_best_effort_stream(mrInputBestEffortStream* stream);
bool receive_best_effort_message(mrInputBestEffortStream* stream, mrSeqNum seq_num);

#ifdef __cplusplus
}
#endif

#endif // _MICRORTPS_CLIENT_CORE_SESSION_INPUT_BEST_EFFORT_STREAM_H_
