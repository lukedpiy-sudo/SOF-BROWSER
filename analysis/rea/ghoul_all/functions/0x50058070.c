// rea decompile_all
// name: FUN_50058070
// address: 0x50058070
// body: available
// range: 0x50058070-0x500581b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50058070(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)((int)this + 0xb8);
  do {
    if ((int *)*piVar3 == param_1) {
      puVar1 = (undefined4 *)((int)this + iVar2 * 0x18 + 0xb0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      *(undefined1 *)((int)puVar1 + 0xd) = 0;
      break;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
  } while (iVar2 < 0x20);
  FUN_50057260((int)param_1);
  (*DAT_5015cab0)(0,0xc04,param_1[0x1d] + 0x2cc);
  (**(code **)(*DAT_5015c4d8 + 0x9c))(param_1);
  FUN_500f7470(param_1);
  FUN_500f74e0(param_1);
  FUN_500f7550(param_1);
  FUN_500efb70((int)param_1);
  FUN_500a5d30(&DAT_5015c79c,(int)param_1);
  (*DAT_5015cb2c)(param_1);
  param_1[0x56] = 0;
  (*DAT_5015cb28)(param_1);
  (*DAT_5015cb2c)(param_1);
  param_1[0x116] = 0;
  param_1[0x46] = 0;
  param_1[8] = 0;
  param_1[0x1e] = 0;
  param_1[0x6d] = (int)s_disconnected_50143004;
  *(undefined4 *)(param_1[0x1d] + 0x2f8) = 0;
  (*DAT_5015cb00)(((int)param_1 + (0x1844bc - DAT_5015cca0)) / 0x464 + -1,&DAT_5015911c);
  (**(code **)(*DAT_5015c4d8 + 0xa0))(param_1);
  if ((undefined4 *)param_1[0x117] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x117])(1);
  }
  param_1[0x117] = 0;
  if (0 < *(int *)this) {
    iVar2 = *(int *)this + -1;
    *(int *)this = iVar2;
    return iVar2;
  }
  return 0;
}

