// rea decompile_all
// name: FUN_50057f80
// address: 0x50057f80
// body: available
// range: 0x50057f80-0x5005806a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_50057f80(void *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = DAT_5015d8c8;
  for (piVar2 = (int *)(DAT_5015cca0 + DAT_5015d8c8 * 0x464);
      (0 < iVar1 && ((*(char *)((int)this + iVar1 + 0x3b4) == '\0' || (piVar2[0x1e] != 0))));
      piVar2 = piVar2 + -0x119) {
    iVar1 = iVar1 + -1;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[0x1e] == 0)) {
    FUN_50057260((int)piVar2);
    piVar2[0x116] = 1;
    piVar2[0x46] = piVar2[0x46] | 0x200;
    iVar1 = *(int *)this;
    *(int *)this = iVar1 + 1;
    *(int *)(piVar2[0x117] + 0x3b8) = iVar1 + 1;
    fVar3 = (float10)(*DAT_5015cb20)(0x42960000,0x42c80000);
    *(float *)(piVar2[0x117] + 0x3b0) = (float)(fVar3 + (float10)DAT_5015ccdc);
    *(undefined1 *)(piVar2[0x1d] + 0xcc) = 0;
    FUN_50059050(this,(int)piVar2,param_1);
    FUN_500f4730((int)piVar2,(uint *)(piVar2[0x1d] + 0xcc),'\0');
    FUN_500f4070(piVar2);
    return piVar2;
  }
  return (int *)0x0;
}

