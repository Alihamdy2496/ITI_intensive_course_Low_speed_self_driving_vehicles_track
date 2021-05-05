// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__FUNCTIONS_H_
#define MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mymsgsrv/msg/rosidl_generator_c__visibility_control.h"

#include "mymsgsrv/msg/detail/custom_msg__struct.h"

/// Initialize msg/CustomMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mymsgsrv__msg__CustomMsg
 * )) before or use
 * mymsgsrv__msg__CustomMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
bool
mymsgsrv__msg__CustomMsg__init(mymsgsrv__msg__CustomMsg * msg);

/// Finalize msg/CustomMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
void
mymsgsrv__msg__CustomMsg__fini(mymsgsrv__msg__CustomMsg * msg);

/// Create msg/CustomMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mymsgsrv__msg__CustomMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
mymsgsrv__msg__CustomMsg *
mymsgsrv__msg__CustomMsg__create();

/// Destroy msg/CustomMsg message.
/**
 * It calls
 * mymsgsrv__msg__CustomMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
void
mymsgsrv__msg__CustomMsg__destroy(mymsgsrv__msg__CustomMsg * msg);


/// Initialize array of msg/CustomMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * mymsgsrv__msg__CustomMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
bool
mymsgsrv__msg__CustomMsg__Sequence__init(mymsgsrv__msg__CustomMsg__Sequence * array, size_t size);

/// Finalize array of msg/CustomMsg messages.
/**
 * It calls
 * mymsgsrv__msg__CustomMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
void
mymsgsrv__msg__CustomMsg__Sequence__fini(mymsgsrv__msg__CustomMsg__Sequence * array);

/// Create array of msg/CustomMsg messages.
/**
 * It allocates the memory for the array and calls
 * mymsgsrv__msg__CustomMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
mymsgsrv__msg__CustomMsg__Sequence *
mymsgsrv__msg__CustomMsg__Sequence__create(size_t size);

/// Destroy array of msg/CustomMsg messages.
/**
 * It calls
 * mymsgsrv__msg__CustomMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsgsrv
void
mymsgsrv__msg__CustomMsg__Sequence__destroy(mymsgsrv__msg__CustomMsg__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__FUNCTIONS_H_
