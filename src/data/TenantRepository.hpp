#ifndef TENANTREPOSITORY_HPP
#define TENANTREPOSITORY_HPP

#include "models/Tenant.hpp"
#include <vector>

class TenantRepository {
public:
    void addTenant(const Tenant& tenant);
    std::vector<Tenant> getAllTenants() const;

private:
    std::vector<Tenant> tenants; // Pour l'instant, stockage en mémoire
};

#endif
