============================
LLVM |release| Release Notes
============================

.. contents::
    :local:

.. only:: PreRelease

  .. warning::
     These are in-progress notes for the upcoming LLVM |version| release.
     Release notes for previous releases can be found on
     `the Download Page <https://releases.llvm.org/download.html>`_.


Introduction
============

This document contains the release notes for the LLVM Compiler Infrastructure,
release |release|.  Here we describe the status of LLVM, including major improvements
from the previous release, improvements in various subprojects of LLVM, and
some of the current users of the code.  All LLVM releases may be downloaded
from the `LLVM releases web site <https://llvm.org/releases/>`_.

For more information about LLVM, including information about the latest
release, please check out the `main LLVM web site <https://llvm.org/>`_.  If you
have questions or comments, the `Discourse forums
<https://discourse.llvm.org>`_ is a good place to ask
them.

Note that if you are reading this file from a Git checkout or the main
LLVM web page, this document applies to the *next* release, not the current
one.  To see the release notes for a specific release, please see the `releases
page <https://llvm.org/releases/>`_.

Non-comprehensive list of changes in this release
=================================================
.. NOTE
   For small 1-3 sentence descriptions, just add an entry at the end of
   this list. If your description won't fit comfortably in one bullet
   point (e.g. maybe you would like to give an example of the
   functionality, or simply have a lot to talk about), see the `NOTE` below
   for adding a new subsection.

* ...

Update on required toolchains to build LLVM
-------------------------------------------

Changes to the LLVM IR
----------------------

- Added Memory Model Relaxation Annotations (MMRAs).

Changes to LLVM infrastructure
------------------------------

Changes to building LLVM
------------------------

Changes to TableGen
-------------------

- We can define type aliases via new keyword ``deftype``.

Changes to Interprocedural Optimizations
----------------------------------------

Changes to the AArch64 Backend
------------------------------

* Added support for Cortex-A78AE, Cortex-A520AE, Cortex-A720AE,
  Neoverse-N3, Neoverse-V3 and Neoverse-V3AE CPUs.

Changes to the AMDGPU Backend
-----------------------------

* Implemented the ``llvm.get.fpenv`` and ``llvm.set.fpenv`` intrinsics.

Changes to the ARM Backend
--------------------------
* FEAT_F32MM is no longer activated by default when using `+sve` on v8.6-A or greater. The feature is still available and can be used by adding `+f32mm` to the command line options.

Changes to the AVR Backend
--------------------------

Changes to the DirectX Backend
------------------------------

Changes to the Hexagon Backend
------------------------------

Changes to the LoongArch Backend
--------------------------------

Changes to the MIPS Backend
---------------------------

Changes to the PowerPC Backend
------------------------------

Changes to the RISC-V Backend
-----------------------------

* Added full support for the experimental Zabha (Byte and
  Halfword Atomic Memory Operations) extension.
* Added assembler/disassembler support for the experimenatl Zalasr
  (Load-Acquire and Store-Release) extension.
* The names of the majority of the S-prefixed (supervisor-level) extension
  names in the RISC-V profiles specification are now recognised.
* Codegen support was added for the Zimop (May-Be-Operations) extension.
* The experimental Ssnpm, Smnpm, Smmpm, Sspm, and Supm 0.8.1 Pointer Masking extensions are supported.
* The experimental Ssqosid extension is supported.
* Zacas is no longer experimental.
* Added the CSR names from the Resumable Non-Maskable Interrupts (Smrnmi) extension.

Changes to the WebAssembly Backend
----------------------------------

Changes to the Windows Target
-----------------------------

Changes to the X86 Backend
--------------------------

Changes to the OCaml bindings
-----------------------------

Changes to the Python bindings
------------------------------

Changes to the C API
--------------------

* Added ``LLVMGetBlockAddressFunction`` and ``LLVMGetBlockAddressBasicBlock``
  functions for accessing the values in a blockaddress constant.

* Added ``LLVMConstStringInContext2`` function, which better matches the C++
  API by using ``size_t`` for string length. Deprecated ``LLVMConstStringInContext``.

* Added the following functions for accessing a function's prefix data:

  * ``LLVMHasPrefixData``
  * ``LLVMGetPrefixData``
  * ``LLVMSetPrefixData``

* Added the following functions for accessing a function's prologue data:

  * ``LLVMHasPrologueData``
  * ``LLVMGetPrologueData``
  * ``LLVMSetPrologueData``

* Deprecated ``LLVMConstNUWNeg`` and ``LLVMBuildNUWNeg``.

* Added ``LLVMAtomicRMWBinOpUIncWrap`` and ``LLVMAtomicRMWBinOpUDecWrap`` to
  ``LLVMAtomicRMWBinOp`` enum for AtomicRMW instructions.

Changes to the CodeGen infrastructure
-------------------------------------

Changes to the Metadata Info
---------------------------------

Changes to the Debug Info
---------------------------------

Changes to the LLVM tools
---------------------------------
* llvm-nm and llvm-objdump can now print symbol information from linked
  WebAssembly binaries, using information from exports or the "name"
  section for functions, globals and data segments. Symbol addresses and sizes
  are printed as offsets in the file, allowing for binary size analysis. Wasm
  files using reference types and GC are also supported (but also only for
  functions, globals, and data, and only for listing symbols and names).

* llvm-ar now utilizes LLVM_DEFAULT_TARGET_TRIPLE to determine the archive format
  if it's not specified with the ``--format`` argument and cannot be inferred from
  input files.

* llvm-ar now allows specifying COFF archive format with ``--format`` argument
  and uses it by default for COFF targets.

* llvm-ranlib now supports ``-V`` as an alias for ``--version``.
  ``-v`` (``--verbose`` in llvm-ar) has been removed.
  (`#87661 <https://github.com/llvm/llvm-project/pull/87661>`_)

* llvm-objcopy now supports ``--set-symbol-visibility`` and
  ``--set-symbols-visibility`` options for ELF input to change the
  visibility of symbols.

* llvm-objcopy now supports ``--skip-symbol`` and ``--skip-symbols`` options
  for ELF input to skip the specified symbols when executing other options
  that can change a symbol's name, binding or visibility.

* llvm-objcopy now supports ``--compress-sections`` to compress or decompress
  arbitrary sections not within a segment.
  (`#85036 <https://github.com/llvm/llvm-project/pull/85036>`_.)

* llvm-profgen now supports COFF+DWARF binaries. This enables Sample-based PGO
  on Windows using Intel VTune's SEP. For details on usage, see the `end-user
  documentation for SPGO
  <https://clang.llvm.org/docs/UsersManual.html#using-sampling-profilers>`_.

* llvm-readelf's ``-r`` output for RELR has been improved.
  (`#89162 <https://github.com/llvm/llvm-project/pull/89162>`_)
  ``--raw-relr`` has been removed.

Changes to LLDB
---------------------------------

Changes to Sanitizers
---------------------

Other Changes
-------------

External Open Source Projects Using LLVM 19
===========================================

* A project...

Additional Information
======================

A wide variety of additional information is available on the `LLVM web page
<https://llvm.org/>`_, in particular in the `documentation
<https://llvm.org/docs/>`_ section.  The web page also contains versions of the
API documentation which is up-to-date with the Git version of the source
code.  You can access versions of these documents specific to this release by
going into the ``llvm/docs/`` directory in the LLVM tree.

If you have any questions or comments about LLVM, please feel free to contact
us via the `Discourse forums <https://discourse.llvm.org>`_.
