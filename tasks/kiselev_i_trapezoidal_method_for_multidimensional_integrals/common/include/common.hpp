#pragma once

#include <string>
#include <tuple>

#include "task/include/task.hpp"

namespace kiselev_i_trapezoidal_method_for_multidimensional_integrals {

using InType = int;
using OutType = int;
using TestType = std::tuple<int, std::string>;
using BaseTask = ppc::task::Task<InType, OutType>;

}  // namespace kiselev_i_trapezoidal_method_for_multidimensional_integrals
