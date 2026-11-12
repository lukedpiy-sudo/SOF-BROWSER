// rea decompile_all
// name: FUN_2000ea20
// address: 0x2000ea20
// body: available
// range: 0x2000ea20-0x2000eb5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000ea20(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  uVar1 = FUN_2001e260(&DAT_20367ebc);
  iVar2 = FUN_2001e260(&DAT_20367ebc);
  if ((uVar1 & 0x20) != 0) {
    iVar2 = iVar2 + 0x100;
  }
  if ((uVar1 & 1) == 0) {
    local_10 = 1.0;
  }
  else {
    iVar3 = FUN_2001e260(&DAT_20367ebc);
    local_10 = (float)iVar3 * 0.003921569;
  }
  if ((uVar1 & 2) == 0) {
    local_14 = 1.0;
  }
  else {
    iVar3 = FUN_2001e260(&DAT_20367ebc);
    local_14 = (float)iVar3 * 0.015625;
  }
  if ((uVar1 & 0x10) == 0) {
    local_18 = 0.0;
  }
  else {
    iVar3 = FUN_2001e260(&DAT_20367ebc);
    local_18 = (float)iVar3 * 0.001;
  }
  if ((uVar1 & 8) == 0) {
    iVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    iVar3 = (int)uVar4 >> 3;
    if (0x400 < iVar3) {
      Com_Error(1,s_CL_ParseStartSoundPacket__ent_____2011ef34,iVar3);
    }
    uVar4 = uVar4 & 7;
  }
  if ((uVar1 & 4) == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    FUN_2001e4c0(&DAT_20367ebc,local_c);
    puVar5 = local_c;
  }
  if (*(int *)(&DAT_2022158c + iVar2 * 4) != 0) {
    (*DAT_20390d7c)(puVar5,iVar3,uVar4,*(int *)(&DAT_2022158c + iVar2 * 4),local_10,local_14,
                    local_18);
  }
  return;
}

