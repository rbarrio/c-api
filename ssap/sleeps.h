/**
  @file sleeps.h
  @author Indra Sistemas S.A.
  @date Oct 30 2015
  @version 4.3
  @brief A platform-independent implementation of the POSIX sleep() function.
  @see http://sofia2.com/desarrollador_en.html for further information.
  @copyright Copyright 2013-15 Indra Sistemas S.A.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License. 
*/
#ifdef WIN32
#include <windows.h>
/**
 * Stops the current thread during the given number of seconds.
 * @param seconds The number of seconds the current thread will be stopped.
 */
void sleep(unsigned seconds)
{
	Sleep(seconds * 1000);
}
#else
#include <unistd.h>
#endif