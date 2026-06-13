#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

typedef enum {
  EXCEPTION_NO_EXCEPTION,
  EXCEPTION_INVALID_NAME,
  EXCEPTION_INVALID_REGISTRATION,
  EXCEPTION_ARGUMENT_IS_NULL,
} ExceptionCode;

typedef struct {
  char *message;
  ExceptionCode code;
} Exception;

void throwException(ExceptionCode code, char *message);
Exception getException(void);
void resetException(void);

#endif
