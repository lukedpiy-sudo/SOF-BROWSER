// rea decompile_all
// name: FUN_500bf790
// address: 0x500bf790
// body: available
// range: 0x500bf790-0x500bf944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bf790(float param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((int)param_1 + 0x1b8);
  *(undefined4 *)((int)param_1 + 0x19c) = 0;
  *(undefined4 *)((int)param_1 + 0x158) = 0;
  *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) | 0x20;
  *(undefined4 *)((int)param_1 + 0x20) = 1;
  if ((uVar1 & 0x40) == 0) {
    *(undefined4 *)((int)param_1 + 0x28) = 4;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x28) = 0x10;
  }
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x10) == 0) {
          if ((uVar1 & 0x20) != 0) {
            *(undefined4 *)((int)param_1 + 0x2c) = 0xe0e1e2e3;
          }
        }
        else {
          *(undefined4 *)((int)param_1 + 0x2c) = 0xdcdddedf;
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x2c) = 0xf3f3f1f1;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2c) = 0xd0d1d2d3;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x2c) = 0xf2f2f0f0;
  }
  if (*(int *)((int)param_1 + 0x324) == 0) {
    if (*(char **)((int)param_1 + 0x1c4) == (char *)0x0) {
      FUN_500c3440((float *)((int)param_1 + 0x10),(float *)((int)param_1 + 0x228));
    }
    else {
      uVar1 = FUN_500c26a0(0,0x1c8,*(char **)((int)param_1 + 0x1c4),(void *)0x0);
      if (uVar1 == 0) {
        uVar3 = *(undefined4 *)((int)param_1 + 0x1c4);
        puVar2 = FUN_500c33f0();
        (*DAT_5015ca24)(s__s_at__s___s_is_a_bad_target_50150524,
                        *(undefined4 *)((int)param_1 + 0x1b4),puVar2,uVar3);
      }
      *(uint *)((int)param_1 + 0x324) = uVar1;
    }
  }
  *(undefined1 **)((int)param_1 + 0x2c4) = &LAB_500bf720;
  *(code **)((int)param_1 + 0x2b8) = FUN_500bf530;
  if (*(int *)((int)param_1 + 0x310) == 0) {
    *(undefined4 *)((int)param_1 + 0x310) = 1;
  }
  *(undefined4 *)((int)param_1 + 0x11c) = 0xc1000000;
  *(undefined4 *)((int)param_1 + 0x120) = 0xc1000000;
  *(undefined4 *)((int)param_1 + 0x124) = 0xc1000000;
  *(undefined4 *)((int)param_1 + 0x128) = 0x41000000;
  *(undefined4 *)((int)param_1 + 300) = 0x41000000;
  *(undefined4 *)((int)param_1 + 0x130) = 0x41000000;
  (*DAT_5015cb28)(param_1);
  uVar1 = *(uint *)((int)param_1 + 0x1b8);
  if ((uVar1 & 1) != 0) {
    if (*(int *)((int)param_1 + 0x32c) == 0) {
      *(float *)((int)param_1 + 0x32c) = param_1;
    }
    *(uint *)((int)param_1 + 0x1b8) = uVar1 | 0x80000001;
    *(uint *)((int)param_1 + 0x118) = *(uint *)((int)param_1 + 0x118) & 0xfffffffe;
    FUN_500bf530(param_1);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x2b4) = 0;
  *(uint *)((int)param_1 + 0x1b8) = uVar1 & 0xfffffffe;
  *(uint *)((int)param_1 + 0x118) = *(uint *)((int)param_1 + 0x118) | 1;
  return;
}

