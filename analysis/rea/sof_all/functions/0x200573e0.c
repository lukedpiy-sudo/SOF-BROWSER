// rea decompile_all
// name: FUN_200573e0
// address: 0x200573e0
// body: available
// range: 0x200573e0-0x20057537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200573e0(char *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  char cVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b4ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 2) = param_2;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 1) = param_2;
  uVar4 = 0xffffffff;
  *in_ECX = &PTR_LAB_20111ed8;
  *(undefined1 *)((int)in_ECX + 5) = 0;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  local_4 = 0;
  cVar2 = FUN_2000a6c0(uVar4,1);
  if (cVar2 != '\0') {
    pcVar6 = (char *)in_ECX[3];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *param_1;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
    in_ECX[4] = uVar4;
    *(undefined1 *)(in_ECX[3] + uVar4) = 0;
  }
  in_ECX[6] = 0;
  local_4 = 1;
  FUN_200fb5cd(in_ECX + 7,0x10,0x100,&LAB_20057540,FUN_20056890);
  param_2 = (undefined1)uVar4;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 0x407) = param_2;
  *(undefined1 *)((int)in_ECX + 0x101d) = param_2;
  *(undefined1 *)(in_ECX + 0x40a) = 0;
  pvVar3 = operator_new(0x24);
  *(undefined4 *)((int)pvVar3 + 4) = 0;
  *(undefined1 *)((int)pvVar3 + 0x20) = 1;
  *(undefined1 *)((int)pvVar3 + 0x21) = 0;
  in_ECX[0x409] = pvVar3;
  *(undefined1 *)((int)pvVar3 + 0x21) = 1;
  *(undefined4 *)in_ECX[0x409] = 0;
  *(undefined4 *)(in_ECX[0x409] + 8) = 0;
  uVar1 = in_ECX[0x409];
  pvVar3 = operator_new(0x24);
  *(undefined4 *)((int)pvVar3 + 4) = uVar1;
  *(undefined1 *)((int)pvVar3 + 0x20) = 0;
  *(undefined1 *)((int)pvVar3 + 0x21) = 0;
  in_ECX[0x408] = pvVar3;
  *(void **)pvVar3 = pvVar3;
  *(undefined4 *)(in_ECX[0x408] + 8) = in_ECX[0x408];
  in_ECX[0x40b] = 0;
  *in_ECX = &PTR_FUN_20111ee8;
  ExceptionList = local_c;
  return;
}

