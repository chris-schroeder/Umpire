//////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2016-19, Lawrence Livermore National Security, LLC and Umpire
// project contributors. See the COPYRIGHT file for details.
//
// SPDX-License-Identifier: (MIT)
//////////////////////////////////////////////////////////////////////////////
#ifndef UMPIRE_HipDeviceResourceFactory_HPP
#define UMPIRE_HipDeviceResourceFactory_HPP

#include "umpire/resource/MemoryResourceFactory.hpp"

namespace umpire {
namespace resource {


/*!
 * \brief Factory class for constructing MemoryResource objects that use GPU
 * memory.
 */
class HipDeviceResourceFactory :
  public MemoryResourceFactory
{
  bool isValidMemoryResourceFor(const std::string& name) noexcept override;

  std::unique_ptr<resource::MemoryResource>
  create(const std::string& name, int id) override;

  std::string handle() const noexcept final override;
};

} // end of namespace resource
} // end of namespace umpire

#endif // UMPIRE_HipDeviceResourceFactory_HPP
