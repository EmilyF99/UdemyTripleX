#include "Comparison.h"

bool Comparison::CompareResults(const Result& Code, const Result& PlayerCode) {
    return Code.Sum == PlayerCode.Sum && Code.Product == PlayerCode.Product;
}
