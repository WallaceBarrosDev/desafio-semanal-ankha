#include "exceptions.h"

Exception exception = {
  .message = "no exception",
  .code = EXCEPTION_NO_EXCEPTION
};

void throwException(ExceptionCode code, char *message) {
  exception.code = code;
  exception.message = message;
}

Exception getException() {
  return exception;
}
