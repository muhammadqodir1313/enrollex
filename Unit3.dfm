object fakultet: Tfakultet
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  ClientHeight = 343
  ClientWidth = 382
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clBlue
  Font.Height = -21
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 25
  object Label1: TLabel
    Left = 120
    Top = 48
    Width = 144
    Height = 25
    Caption = 'Poliklinika nomi'
  end
  object DBEdit1: TDBEdit
    Left = 80
    Top = 101
    Width = 233
    Height = 33
    DataField = 'Poliklinika nomi'
    DataSource = DM.DSFak
    TabOrder = 0
  end
  object BitBtn1: TBitBtn
    Left = 80
    Top = 168
    Width = 99
    Height = 33
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 1
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 214
    Top = 168
    Width = 99
    Height = 33
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 2
    OnClick = BitBtn2Click
  end
end
