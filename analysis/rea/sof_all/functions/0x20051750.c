// rea decompile_all
// name: FUN_20051750
// address: 0x20051750
// body: available
// range: 0x20051750-0x20051af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20051750(void)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *in_ECX;
  DWORD local_26c;
  undefined1 local_268 [34];
  undefined1 local_246;
  undefined1 local_245;
  int local_244;
  undefined1 local_23d;
  uint local_23c;
  CHAR local_238 [14];
  undefined1 local_22a;
  undefined1 local_229;
  DWORD local_228;
  DWORD local_224;
  UINT local_220;
  CHAR local_21c [264];
  CHAR local_114 [271];
  undefined1 local_5;
  
  *in_ECX = 1;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  local_23c = GetLogicalDrives();
  local_244 = 0;
  do {
    if (0x19 < local_244) {
LAB_2005185a:
      for (local_244 = 0; local_244 < 6; local_244 = local_244 + 1) {
        uVar3 = FUN_20051af4();
        *(undefined4 *)(in_ECX + local_244 * 8 + 0x48) = uVar3;
        iVar4 = FUN_20051af4();
        *(int *)(in_ECX + local_244 * 8 + 0x48) =
             iVar4 * 0x10000 + *(int *)(in_ECX + local_244 * 8 + 0x48);
        uVar3 = FUN_20051af4();
        *(undefined4 *)(in_ECX + local_244 * 8 + 0x4c) = uVar3;
        iVar4 = FUN_20051af4();
        *(int *)(in_ECX + local_244 * 8 + 0x4c) =
             iVar4 * 0x10000 + *(int *)(in_ECX + local_244 * 8 + 0x4c);
      }
      uVar3 = FUN_20051af4();
      *(undefined4 *)(in_ECX + 0x80) = uVar3;
      iVar4 = FUN_20051af4();
      *(int *)(in_ECX + 0x80) = iVar4 * 0x10000 + *(int *)(in_ECX + 0x80);
      for (local_244 = 6; local_244 < 7; local_244 = local_244 + 1) {
        uVar3 = FUN_20051af4();
        *(undefined4 *)(in_ECX + local_244 * 8 + 0x48) = uVar3;
        iVar4 = FUN_20051af4();
        *(int *)(in_ECX + local_244 * 8 + 0x48) =
             iVar4 * 0x10000 + *(int *)(in_ECX + local_244 * 8 + 0x48);
        uVar3 = FUN_20051af4();
        *(undefined4 *)(in_ECX + local_244 * 8 + 0x4c) = uVar3;
        iVar4 = FUN_20051af4();
        *(int *)(in_ECX + local_244 * 8 + 0x4c) =
             iVar4 * 0x10000 + *(int *)(in_ECX + local_244 * 8 + 0x4c);
      }
      in_ECX[1] = 0;
      *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(in_ECX + 0x54);
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x5c);
      *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 100);
      *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x6c);
      *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(in_ECX + 0x74);
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0x7c);
      cVar1 = FUN_20051c81(local_268);
      if (cVar1 != '\0') {
        cVar1 = FUN_20052154(&local_246,&local_5,&local_229,&local_23d,&local_22a,&local_245);
        if (cVar1 != '\0') {
          *in_ECX = 0;
        }
      }
      return in_ECX;
    }
    if ((local_23c & 1 << ((byte)local_244 & 0x1f)) != 0) {
      FUN_200fabac(local_238,&DAT_20137500,local_244 + 0x41);
      local_220 = GetDriveTypeA(local_238);
      if (local_220 == 3) {
        BVar2 = GetVolumeInformationA
                          (local_238,local_114,0x104,&local_26c,&local_228,&local_224,local_21c,
                           0x104);
        if (BVar2 != 0) {
          *(DWORD *)(in_ECX + 0x84) = local_26c;
          goto LAB_2005185a;
        }
      }
    }
    local_244 = local_244 + 1;
  } while( true );
}

