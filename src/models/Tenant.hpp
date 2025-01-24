#ifndef TENANT_HPP
#define TENANT_HPP

#include <string>

class Tenant {
public:
    Tenant(const std::string& name, const std::string& address, const std::string& email, const std::string& phone);
    const std::string& getName() const;
    const std::string& getAddress() const;
    const std::string& getEmail() const;
    const std::string& getPhone() const;

private:
    std::string name;
    std::string address;
    std::string email;
    std::string phone;
};

#endif