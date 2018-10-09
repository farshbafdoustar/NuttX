
// Copyright 2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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



#ifdef __cplusplus
extern "C"
{
#endif

#include <micro-xrce-dds/client/profile/session/common_create_entities.h>

MRDLLAPI uint16_t mr_write_create_participant_ref(mrSession* session, mrStreamId stream_id,
                                         mrObjectId object_id, int16_t domain_id, const char* ref, uint8_t mode);

#ifdef __cplusplus
}
#endif
