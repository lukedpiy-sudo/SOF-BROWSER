// rea decompile_all
// name: FUN_2005db20
// address: 0x2005db20
// body: available
// range: 0x2005db20-0x2005dd35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005db20(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  
  if (DAT_20396de0 == 0) {
    if (*(float *)(DAT_20249618 + 0x18) == 0.0) {
      FUN_2000b2c0(1);
      FUN_20013a50(0);
    }
  }
  else {
    FUN_2005fec0(s_Server_restarted_201397cc,1);
  }
  FUN_200223c0();
  DAT_20396de0 = 1;
  if ((*(float *)(DAT_20249618 + 0x18) != 0.0) &&
     (fVar8 = (float10)FUN_200216d0(s_deathmatch_2011d664), fVar8 == (float10)0.0)) {
    FUN_200221b0(s_deathmatch_2011d664,&DAT_2011d31c,0x14);
  }
  fVar8 = (float10)FUN_200216d0(s_deathmatch_2011d664);
  if (fVar8 == (float10)0.0) {
    FUN_200221b0(s_maxclients_2011d768,&DAT_2011d31c,0x14);
    if ((char)DAT_203a1f24 == '\0') {
      FUN_2008a990();
    }
  }
  else {
    iVar2 = __ftol();
    if (iVar2 < 2) {
      FUN_200221b0(s_maxclients_2011d768,&DAT_2011f604,0x14);
    }
    else if (0x20 < iVar2) {
      uVar3 = FUN_20055450(&DAT_2011ee58,0x20,0x14);
      FUN_200221b0(s_maxclients_2011d768,uVar3);
    }
  }
  DAT_20396ee8 = FUN_200f9f57();
  iVar2 = __ftol();
  DAT_20396eec = Z_Malloc(iVar2 * 0xd2ac);
  iVar2 = __ftol();
  DAT_20396ef0 = iVar2 * 0x400;
  DAT_20396ef8 = Z_Malloc(iVar2 * 0x1d000);
  FUN_2004f2d0(1.0 < *(float *)(DAT_203fecd0 + 0x18));
  DAT_20396efc = 0xff676981;
  FUN_2005cdb0();
  iVar2 = __ftol();
  if (0 < iVar2) {
    iVar6 = 0;
    iVar2 = 1;
    do {
      piVar4 = (int *)(*(int *)(DAT_20396dd8 + 100) * iVar2 + *(int *)(DAT_20396dd8 + 0x60));
      *piVar4 = iVar2;
      *(int **)(iVar6 + 0x298 + DAT_20396eec) = piVar4;
      puVar7 = (undefined4 *)(iVar6 + 0x208 + DAT_20396eec);
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar6 = iVar6 + 0xd2ac;
      iVar5 = __ftol();
      bVar1 = iVar2 < iVar5;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  return;
}

