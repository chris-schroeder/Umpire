//////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2016-19, Lawrence Livermore National Security, LLC and Umpire
// project contributors. See the COPYRIGHT file for details.
//
// SPDX-License-Identifier: (MIT)
//////////////////////////////////////////////////////////////////////////////
#ifndef UMPIRE_CudaUnifiedMemoryResourceFactory_HPP
#define UMPIRE_CudaUnifiedMemoryResourceFactory_HPP

#include "umpire/resource/MemoryResourceFactory.hpp"

namespace umpire {
namespace resource {

/*!
 * \brief Factory class to construct a MemoryResource that uses NVIDIA
 * "unified" memory, accesible from both the CPU and NVIDIA GPUs.
 */
class CudaUnifiedMemoryResourceFactory :
  public MemoryResourceFactory
{
public:
  bool isValidMemoryResourceFor(const std::string& name) noexcept final override;

  std::unique_ptr<resource::MemoryResource>
  create(const std::string& name, int id) final override;

  std::string handle() const noexcept final override;
};

} // end of namespace resource
} // end of namespace umpire

#endif // UMPIRE_CudaUnifiedMemoryResourceFactory_HPP
