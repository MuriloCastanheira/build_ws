# Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Copy configure.ac
file(INSTALL /workspace/foxy_ws/src/fastcdr/configure.ac
    DESTINATION /workspace/foxy_ws/build/fastcdr/autotools
    )

# Copy m4 diretory
file(INSTALL /workspace/foxy_ws/src/fastcdr/m4
    DESTINATION /workspace/foxy_ws/build/fastcdr/autotools
    )

# Create include/fastcdr
file(MAKE_DIRECTORY /workspace/foxy_ws/build/fastcdr/autotools/include/fastcdr)

# Run autoreconf
execute_process(COMMAND autoreconf -fi /workspace/foxy_ws/build/fastcdr/autotools
    RESULT_VARIABLE EXECUTE_RESULT)

if(NOT EXECUTE_RESULT EQUAL 0)
    message(FATAL_ERROR "Failed the execution of autoreconf")
endif()

# Copy include/fastcdr/config.h.in
file(INSTALL /workspace/foxy_ws/src/fastcdr/include/fastcdr/config.h.in
    DESTINATION /workspace/foxy_ws/build/fastcdr/autotools/include/fastcdr
    )

# Copy licenses
file(INSTALL /workspace/foxy_ws/src/fastcdr/LICENSE
    DESTINATION /workspace/foxy_ws/build/fastcdr/autotools
    )
