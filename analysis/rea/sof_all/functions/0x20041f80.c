// rea decompile_all
// name: FUN_20041f80
// address: 0x20041f80
// body: available
// range: 0x20041f80-0x20042097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20041f80(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  float *pfVar6;
  
  if (*in_ECX != 0) {
    if (in_ECX[0xd1] == 0) {
      FUN_20042af0();
    }
    bVar1 = true;
    in_ECX[0xd1] = 1;
    iVar5 = 0;
    if (0 < *(int *)(*in_ECX + 0x14)) {
      pfVar6 = (float *)(in_ECX + 0x25);
      do {
        if (*pfVar6 != 0.0) {
          if (*pfVar6 == -1.0) {
            iVar2 = FUN_20042510();
            if (iVar2 == 0) {
              *pfVar6 = 0.0;
            }
            else {
              bVar1 = false;
              if (iVar2 != 1) {
LAB_20042062:
                bVar1 = false;
                in_ECX[0xd1] = 0;
              }
            }
          }
          else if ((in_ECX[0x21] == 0) && ((in_ECX[0x20] == 0 || (in_ECX[0x1e] != 0)))) {
            if (DAT_2027c478 <= *pfVar6) goto LAB_20042062;
            puVar3 = (undefined4 *)FUN_2002e3b0(iVar5);
            if (puVar3 != (undefined4 *)0x0) {
              uVar4 = __ftol();
              (**(code **)*puVar3)(uVar4,uVar4,*in_ECX);
            }
            *pfVar6 = 0.0;
          }
        }
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 1;
      } while (iVar5 < *(int *)(*in_ECX + 0x14));
      if (!bVar1) {
        return;
      }
    }
    in_ECX[0xd2] = 0;
  }
  return;
}

