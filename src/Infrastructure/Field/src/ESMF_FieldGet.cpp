! $Id: ESMF_FieldGet.cpp,v 1.9 2006/03/28 21:52:26 theurich Exp $
!
! Earth System Modeling Framework
! Copyright 2002-2003, University Corporation for Atmospheric Research, 
! Massachusetts Institute of Technology, Geophysical Fluid Dynamics 
! Laboratory, University of Michigan, National Centers for Environmental 
! Prediction, Los Alamos National Laboratory, Argonne National Laboratory, 
! NASA Goddard Space Flight Center.
! Licensed under the GPL.
!
!==============================================================================
^define ESMF_FILENAME "ESMF_FieldGet.F90"
!
!     ESMF FieldGet module
      module ESMF_FieldGetMod
!
!==============================================================================
!
! This file contains the Field class methods which are automatically
!  generated from macros to handle the type/kind/rank overloading.
!  See ESMF_Field.F90 for non-macroized functions and subroutines.
!
!------------------------------------------------------------------------------
! INCLUDES
! < ignore blank lines below.  they are created by the files which
!   define various macros. >
#include "ESMF_FieldGetMacros.h"
^include "ESMF.h"
!------------------------------------------------------------------------------
! !USES:
      use ESMF_UtilTypesMod
      use ESMF_BaseMod
      use ESMF_LogErrMod
      use ESMF_LocalArrayMod
      use ESMF_InternArrayMod
      use ESMF_InternArrayGetMod
      use ESMF_FieldMod
      implicit none

!------------------------------------------------------------------------------
! !PRIVATE TYPES:
      private

!------------------------------------------------------------------------------
! !PUBLIC MEMBER FUNCTIONS:

      public ESMF_FieldGetDataPointer
 
!------------------------------------------------------------------------------
! The following line turns the CVS identifier string into a printable variable.
      character(*), parameter, private :: version = &
      '$Id: ESMF_FieldGet.cpp,v 1.9 2006/03/28 21:52:26 theurich Exp $'

!==============================================================================
! 
! INTERFACE BLOCKS
!
!==============================================================================


!------------------------------------------------------------------------------

!BOPI
! !IROUTINE: ESMF_FieldGetDataPointer -- Get a Fortran pointer to the data contents

! !INTERFACE:
     interface ESMF_FieldGetDataPointer

! !PRIVATE MEMBER FUNCTIONS:
!
      ! < declarations of interfaces for each T/K/R >
InterfaceMacro(FieldGetDataPointer)

! !DESCRIPTION: 
! This interface provides a single entry point for the various 
!  types of {\tt ESMF\_FieldGetDataPointer} subroutines.   
!  
!EOPI 
end interface

!==============================================================================

      contains

!==============================================================================

!------------------------------------------------------------------------------
!------------------------------------------------------------------------------

      ! < declarations of subroutines for each T/K/R >
DeclarationMacro(FieldGetDataPointer)


        end module ESMF_FieldGetMod
