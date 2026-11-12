// rea decompile_all
// name: FUN_200307b0
// address: 0x200307b0
// body: available
// range: 0x200307b0-0x20030857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200307b0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = FUN_2001e260(&DAT_20367ebc);
  uVar3 = FUN_2001e260(&DAT_20367ebc);
  iVar4 = FUN_2001e260(&DAT_20367ebc);
  FUN_2001e690(&DAT_20367ebc,&local_c);
  fVar1 = (float)(iVar4 << 2);
  local_18 = DAT_201e8ff0 + local_c * fVar1;
  local_14 = DAT_201e8ff4 + local_8 * fVar1;
  local_10 = DAT_201e8ff8 + local_4 * fVar1;
  if (iVar2 < 0x18) {
    (**(code **)(&DAT_201344e8 + iVar2 * 4))(0,&local_18,iVar2,uVar3);
  }
  return;
}

