#include "log.h"

const char* CustomVerbosityToName(loguru::Verbosity verbosity) {
  switch (verbosity) {
    case loguru::Verbosity_1:
      return "DEBG";
    case loguru::Verbosity_2:
      return "TRCE";
    default:
      return nullptr;
  }
}

loguru::Verbosity CustomNameToVerbosity(const char* name) {
  if (strcmp(name, "DEBG") == 0) {
    return loguru::Verbosity_1;
  } else if (strcmp(name, "TRCE") == 0) {
    return loguru::Verbosity_2;
  } else {
    return loguru::Verbosity_INVALID;
  }
}
