#ifndef TENANTSERVICE_HPP
#define TENANTSERVICE_HPP

#include "models/Tenant.hpp"
#include "data/TenantRepository.hpp"

class TenantService {
public:
    TenantService(TenantRepository& repository);

    void addTenant(const std::string& name, const std::string& address,
                   const std::string& email, const std::string& phone);
    void listTenants() const;

private:
    TenantRepository& repository;
};

#endif
