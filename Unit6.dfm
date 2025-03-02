object Talaba: TTalaba
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  ClientHeight = 483
  ClientWidth = 692
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clLime
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 72
    Top = 48
    Width = 75
    Height = 23
    Caption = 'Familyasi'
  end
  object Label2: TLabel
    Left = 72
    Top = 104
    Width = 35
    Height = 23
    Caption = 'Ismi'
  end
  object Label3: TLabel
    Left = 72
    Top = 157
    Width = 122
    Height = 23
    Caption = 'Tug'#39'ilgan sana'
  end
  object Label4: TLabel
    Left = 72
    Top = 221
    Width = 126
    Height = 23
    Caption = 'Kasallik tashxisi'
  end
  object DBEdit1: TDBEdit
    Left = 280
    Top = 42
    Width = 209
    Height = 31
    DataField = 'Familyasi'
    DataSource = DM.DStalaba
    TabOrder = 0
  end
  object DBEdit2: TDBEdit
    Left = 280
    Top = 98
    Width = 209
    Height = 31
    DataField = 'Ismi'
    DataSource = DM.DStalaba
    TabOrder = 1
  end
  object DBEdit3: TDBEdit
    Left = 280
    Top = 154
    Width = 209
    Height = 31
    DataField = 'tugilgan sana'
    DataSource = DM.DStalaba
    TabOrder = 2
  end
  object BitBtn1: TBitBtn
    Left = 72
    Top = 290
    Width = 91
    Height = 41
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 3
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 392
    Top = 290
    Width = 97
    Height = 41
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 4
    OnClick = BitBtn2Click
  end
  object DBEdit4: TDBEdit
    Left = 280
    Top = 218
    Width = 209
    Height = 31
    DataField = 'Kasallik tashxisi'
    DataSource = DM.DStalaba
    TabOrder = 5
  end
end
