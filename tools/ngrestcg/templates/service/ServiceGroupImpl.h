// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest
// DO NOT EDIT. ANY CHANGES WILL BE LOST

#ifndef $(project.ns.!trimleft/:/.!toupper.!replace/::/_/)SERVICEGROUPIMPL_H
#define $(project.ns.!trimleft/:/.!toupper.!replace/::/_/)SERVICEGROUPIMPL_H

#include <ngrest/engine/ServiceGroup.h>

$(project.startCppNs)\

class ServiceGroupImpl: public ::ngrest::ServiceGroup
{
public:
    ServiceGroupImpl();
    virtual ~ServiceGroupImpl();

    virtual const std::string& getName() const override;

    virtual const std::vector< ::ngrest::ServiceWrapper*>& getServices() const override;

private:
    const std::string name;
    std::vector< ::ngrest::ServiceWrapper*> services;
};

$(project.endCppNs)

#endif // $(project.ns.!trimleft/:/.!toupper.!replace/::/_/)SERVICEGROUPIMPL_H
