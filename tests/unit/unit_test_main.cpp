// Copyright (c) 2010-2022, Lawrence Livermore National Security, LLC. Produced
// at the Lawrence Livermore National Laboratory. All Rights reserved. See files
// LICENSE and NOTICE for details. LLNL-CODE-806117.
//
// This file is part of the MFEM library. For more information and source code
// availability visit https://mfem.org.
//
// MFEM is free software; you can redistribute it and/or modify it under the
// terms of the BSD-3 license. We welcome feedback and contributions, see file
// CONTRIBUTING.md for details.

#define CATCH_CONFIG_RUNNER
#include "mfem.hpp"
#include "run_unit_tests.hpp"

bool launch_all_non_regression_tests = false;
std::string mfem_data_dir;

int main(int argc, char *argv[])
{
   mfem::out.Disable();
   mfem::err.Disable();
   // Exclude parallel tests.
   return RunCatchSession(argc, argv, {"~[Parallel]"});
}
