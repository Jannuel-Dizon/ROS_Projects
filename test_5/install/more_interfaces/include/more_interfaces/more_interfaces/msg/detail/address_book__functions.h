// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/address_book.h"


#ifndef MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__FUNCTIONS_H_
#define MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "more_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "more_interfaces/msg/detail/address_book__struct.h"

/// Initialize msg/AddressBook message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * more_interfaces__msg__AddressBook
 * )) before or use
 * more_interfaces__msg__AddressBook__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__AddressBook__init(more_interfaces__msg__AddressBook * msg);

/// Finalize msg/AddressBook message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__AddressBook__fini(more_interfaces__msg__AddressBook * msg);

/// Create msg/AddressBook message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * more_interfaces__msg__AddressBook__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
more_interfaces__msg__AddressBook *
more_interfaces__msg__AddressBook__create(void);

/// Destroy msg/AddressBook message.
/**
 * It calls
 * more_interfaces__msg__AddressBook__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__AddressBook__destroy(more_interfaces__msg__AddressBook * msg);

/// Check for msg/AddressBook message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__AddressBook__are_equal(const more_interfaces__msg__AddressBook * lhs, const more_interfaces__msg__AddressBook * rhs);

/// Copy a msg/AddressBook message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__AddressBook__copy(
  const more_interfaces__msg__AddressBook * input,
  more_interfaces__msg__AddressBook * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_type_hash_t *
more_interfaces__msg__AddressBook__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
more_interfaces__msg__AddressBook__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_runtime_c__type_description__TypeSource *
more_interfaces__msg__AddressBook__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
more_interfaces__msg__AddressBook__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/AddressBook messages.
/**
 * It allocates the memory for the number of elements and calls
 * more_interfaces__msg__AddressBook__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__AddressBook__Sequence__init(more_interfaces__msg__AddressBook__Sequence * array, size_t size);

/// Finalize array of msg/AddressBook messages.
/**
 * It calls
 * more_interfaces__msg__AddressBook__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__AddressBook__Sequence__fini(more_interfaces__msg__AddressBook__Sequence * array);

/// Create array of msg/AddressBook messages.
/**
 * It allocates the memory for the array and calls
 * more_interfaces__msg__AddressBook__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
more_interfaces__msg__AddressBook__Sequence *
more_interfaces__msg__AddressBook__Sequence__create(size_t size);

/// Destroy array of msg/AddressBook messages.
/**
 * It calls
 * more_interfaces__msg__AddressBook__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__AddressBook__Sequence__destroy(more_interfaces__msg__AddressBook__Sequence * array);

/// Check for msg/AddressBook message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__AddressBook__Sequence__are_equal(const more_interfaces__msg__AddressBook__Sequence * lhs, const more_interfaces__msg__AddressBook__Sequence * rhs);

/// Copy an array of msg/AddressBook messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__AddressBook__Sequence__copy(
  const more_interfaces__msg__AddressBook__Sequence * input,
  more_interfaces__msg__AddressBook__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__FUNCTIONS_H_
