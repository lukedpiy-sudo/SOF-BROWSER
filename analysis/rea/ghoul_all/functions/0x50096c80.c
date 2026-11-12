// rea decompile_all
// name: FUN_50096c80
// address: 0x50096c80
// body: available
// range: 0x50096c80-0x50096ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_50096c80(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8 [3];
  undefined1 local_cc [56];
  float afStack_94 [17];
  float afStack_50 [19];
  undefined4 local_4;
  
  afStack_94[2] = 0.0;
  local_4 = 0;
  afStack_50[2] = 0.0;
  pfVar1 = (float *)FUN_500b4a40(param_1,1);
  if (pfVar1 != (float *)0x0) {
    FUN_500c3bb0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),pfVar1,(undefined4 *)0x0,
                 s_DUMMY04_50146548,&local_f0,(undefined4 *)0x0);
  }
  FUN_500fdd70((float *)(param_1 + 0x10),&local_e4,local_d8,(float *)0x0);
  local_f0 = local_e4 * 80.0 + (local_f0 - local_d8[0] * 5.0);
  local_ec = local_e0 * 80.0 + (local_ec - local_d8[1] * 5.0);
  local_e8 = local_dc * 80.0 + (local_e8 - local_d8[2] * 5.0);
  (**(code **)((int)*pfVar1 + 8))(local_cc);
  pfVar4 = local_d8 + 2;
  pfVar5 = afStack_94 + 2;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = local_d8 + 2;
  pfVar5 = afStack_50 + 2;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_500ecef0(afStack_94 + 2,2,0.9424778);
  FUN_500ed0d0(local_d8 + 2,afStack_50 + 2,afStack_94 + 2);
  (**(code **)*pfVar1)(local_d8 + 2);
  FUN_500c3bb0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),pfVar1,(undefined4 *)0x0,
               s_DUMMY03_50146550,(undefined4 *)&stack0xffffff08,(undefined4 *)0x0);
  piVar2 = (int *)FUN_500b4a40(param_1,4);
  FUN_500fdd70((float *)(param_1 + 0x10),&local_ec,&local_e0,(float *)0x0);
  local_f0 = local_e4 * 80.0 + (local_f0 - local_d8[0] * 5.0);
  (**(code **)(*piVar2 + 8))(local_d8 + 1);
  pfVar1 = local_d8;
  pfVar4 = afStack_94;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar1 = local_d8;
  pfVar4 = afStack_50;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  FUN_500ecef0(afStack_94,2,-0.9424778);
  FUN_500ed0d0(local_d8,afStack_50,afStack_94);
  (**(code **)*piVar2)(local_d8);
  return;
}

