// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:291


#include "TAO_ExtC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "TAO_ExtC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:69

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for TAO::ConnectionTimeoutPolicy.

TAO::ConnectionTimeoutPolicy_ptr
TAO::Objref_Traits<TAO::ConnectionTimeoutPolicy>::duplicate (
    TAO::ConnectionTimeoutPolicy_ptr p
  )
{
  return TAO::ConnectionTimeoutPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<TAO::ConnectionTimeoutPolicy>::release (
    TAO::ConnectionTimeoutPolicy_ptr p
  )
{
  CORBA::release (p);
}

TAO::ConnectionTimeoutPolicy_ptr
TAO::Objref_Traits<TAO::ConnectionTimeoutPolicy>::nil (void)
{
  return TAO::ConnectionTimeoutPolicy::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<TAO::ConnectionTimeoutPolicy>::marshal (
    TAO::ConnectionTimeoutPolicy_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

TAO::ConnectionTimeoutPolicy::ConnectionTimeoutPolicy (void)
{}

TAO::ConnectionTimeoutPolicy::~ConnectionTimeoutPolicy (void)
{}

void 
TAO::ConnectionTimeoutPolicy::_tao_any_destructor (void *_tao_void_pointer)
{
  ConnectionTimeoutPolicy *_tao_tmp_pointer =
    static_cast<ConnectionTimeoutPolicy *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

TAO::ConnectionTimeoutPolicy_ptr
TAO::ConnectionTimeoutPolicy::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ConnectionTimeoutPolicy::_nil ();
    }
  
  ConnectionTimeoutPolicy_ptr proxy =
    dynamic_cast<ConnectionTimeoutPolicy_ptr> (_tao_objref);
  
  return ConnectionTimeoutPolicy::_duplicate (proxy);
}

TAO::ConnectionTimeoutPolicy_ptr
TAO::ConnectionTimeoutPolicy::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ConnectionTimeoutPolicy::_nil ();
    }
  
  ConnectionTimeoutPolicy_ptr proxy =
    dynamic_cast<ConnectionTimeoutPolicy_ptr> (_tao_objref);
  
  return ConnectionTimeoutPolicy::_duplicate (proxy);
}

TAO::ConnectionTimeoutPolicy_ptr
TAO::ConnectionTimeoutPolicy::_duplicate (ConnectionTimeoutPolicy_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
TAO::ConnectionTimeoutPolicy::_tao_release (ConnectionTimeoutPolicy_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
TAO::ConnectionTimeoutPolicy::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:tao/TAO/ConnectionTimeoutPolicy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TAO::ConnectionTimeoutPolicy::_interface_repository_id (void) const
{
  return "IDL:tao/TAO/ConnectionTimeoutPolicy:1.0";
}

CORBA::Boolean
TAO::ConnectionTimeoutPolicy::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:1528

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Objref_Traits<
        TAO::ConnectionTimeoutPolicy
      >;

  template class
    TAO_Objref_Var_T<
        TAO::ConnectionTimeoutPolicy
      >;
  
  template class
    TAO_Objref_Out_T<
        TAO::ConnectionTimeoutPolicy
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Objref_Traits< \
        TAO::ConnectionTimeoutPolicy \
      >

# pragma instantiate \
    TAO_Objref_Var_T< \
        TAO::ConnectionTimeoutPolicy
      >
  
# pragma instantiate \
    TAO_Objref_Out_T< \
        TAO::ConnectionTimeoutPolicy
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
