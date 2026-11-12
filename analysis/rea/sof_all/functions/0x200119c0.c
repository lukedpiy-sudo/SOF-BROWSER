// rea decompile_all
// name: FUN_200119c0
// address: 0x200119c0
// body: available
// range: 0x200119c0-0x20011a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200119c0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_70 [12];
  undefined4 local_40;
  undefined1 local_38 [56];
  
  pfVar1 = (float *)FUN_2001b570(local_38,param_2,param_5,param_3,param_4,0,0x2000003);
  pfVar3 = local_70;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (local_70[1] < 1.0) {
    local_40 = 1;
  }
  FUN_200117f0(param_2,param_3,param_4,param_5,local_70,1);
  pfVar1 = local_70;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

