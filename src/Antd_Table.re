/*
 bordered	Whether to show all table borders	boolean	false
 childrenColumnName	The column contains children to display	string[]	children
 columns	Columns of table	ColumnProps[]	-
 components	Override default table elements	TableComponents	-
 dataSource	Data record array to be displayed	any[]	-
 defaultExpandAllRows	Expand all rows initially	boolean	false
 defaultExpandedRowKeys	Initial expanded row keys	string[]	-
 expandedRowKeys	Current expanded row keys	string[]	-
 expandedRowRender	Expanded container render for each row	Function(record, index, indent, expanded):ReactNode	-
 expandRowByClick	Whether to expand row by clicking anywhere in the whole row	boolean	false
 footer	Table footer renderer	Function(currentPageData)
 indentSize	Indent size in pixels of tree data	number	15
 loading	Loading status of table	boolean|object (more)	false
 locale	i18n text including filter, sort, empty text, etc	object	filterConfirm: 'Ok'
 filterReset: 'Reset'
 emptyText: 'No Data'
 Default
 pagination	Pagination config or Pagination, hide it by setting it to false	object
 rowClassName	Row's className	Function(record, index):string	-
 rowKey	Row's unique key, could be a string or function that returns a string	string|Function(record):string	key
 rowSelection	Row selection config	object	null
 scroll	Set horizontal or vertical scrolling, can also be used to specify the width and height of the scroll area. It is recommended to set a number for x, if you want to set it to true, you need to add style .ant-table td { white-space: nowrap; }.	{ x: number | true, y: number }	-
 showHeader	Whether to show table header	boolean	true
 size	Size of table	default | middle | small	default
 title	Table title renderer	Function(currentPageData)
 onChange	Callback executed when pagination, filters or sorter is changed	Function(pagination, filters, sorter)
 onExpand	Callback executed when the row expand icon is clicked	Function(expanded, record)
 onExpandedRowsChange	Callback executed when the expanded rows change	Function(expandedRows)
 onHeaderRow	Set props on per header row	Function(column, index)	-
 onRow	Set props on per row	Function(record, index)	-

  */

/*
 export interface ColumnProps<T> {
   title?: React.ReactNode;
   key?: string;
   dataIndex?: string;
   render?: (text: any, record: T, index: number) => React.ReactNode;
   filters?: { text: string; value: string }[];
   onFilter?: (value: any, record: T) => boolean;
   filterMultiple?: boolean;
   filterDropdown?: React.ReactNode;
   sorter?: boolean | ((a: any, b: any) => number);
   colSpan?: number;
   width?: string | number;
   className?: string;
   fixed?: boolean | ('left' | 'right');
   filteredValue?: any[];
   sortOrder?: boolean | ('ascend' | 'descend');
 }
 */

[%bs.raw {|require("antd/lib/table/style")|}];

[@bs.deriving jsConverter]
type sizeType = [ | `default | `middle | `small];

[@bs.deriving abstract] // TODO: finish
type record = {. "name": string};

[@bs.deriving abstract]
type mouseEvents = {
  [@bs.optional]
  onClick: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDoubleClick: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onContextMenu: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseEnter: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseLeave: ReactEvent.Mouse.t => unit,
};

type columnWidth =
  | Int(int)
  | Str(string);

module ColumnWidth = {
  type t;
  external int: int => t = "%identity";
  external str: string => t = "%identity";
};

let setColumnWidth = (a: columnWidth) =>
  switch (a) {
  | Int(int) => ColumnWidth.int(int)
  | Str(string) => ColumnWidth.str(string)
  };

[@bs.deriving abstract]
type columnParams = {
  .
  "title": React.element,
  "dataIndex": string,
  "width": option(columnWidth),
  "key": string,
  "render": (string, record) => React.element,
};

[@bs.deriving abstract]
type resolvedColumnParams = {
  .
  "title": React.element,
  "dataIndex": string,
  "width": option(ColumnWidth.t),
  "key": string,
  "render": (string, record) => React.element,
};

let parseColumnProps = (columnProps: columnParams): resolvedColumnParams => {
  "title": columnProps##title,
  "dataIndex": columnProps##dataIndex,
  "width": Belt.Option.map(columnProps##width, setColumnWidth),
  "key": columnProps##key,
  "render": columnProps##render,
};

type scrollVal =
  | ScrollInt(int)
  | ScrollStr(string)
  | ScrollBool(bool);

module ScrollVal = {
  type t;
  external int: int => t = "%identity";
  external bool: bool => t = "%identity";
  external string: string => t = "%identity";
};

let setScrollVal = scrollVal =>
  switch (scrollVal) {
  | ScrollInt(int) => ScrollVal.int(int)
  | ScrollBool(bool) => ScrollVal.bool(bool)
  | ScrollStr(string) => ScrollVal.string(string)
  };

[@bs.deriving abstract]
type scroll = {
  [@bs.optional]
  xScroll: scrollVal,
  [@bs.optional]
  yScroll: scrollVal,
};

[@bs.deriving abstract]
type scrollTranspiled = {
  [@bs.optional]
  x: ScrollVal.t,
  [@bs.optional]
  y: ScrollVal.t,
};

let transpileScroll = (scroll: option(scroll)): scrollTranspiled => {
  switch (scroll) {
  | Some(scroll) =>
    let x = xScrollGet(scroll);
    let y = yScrollGet(scroll);
    switch (x, y) {
    | (Some(x), Some(y)) =>
      scrollTranspiled(~x=setScrollVal(x), ~y=setScrollVal(y), ())
    | (Some(x), None) => scrollTranspiled(~x=setScrollVal(x), ())
    | (None, Some(y)) => scrollTranspiled(~y=setScrollVal(y), ())
    | _ => scrollTranspiled()
    };
  | _ => scrollTranspiled()
  };
};

[@bs.obj]
external makePropsTable:
  (
    ~bordered: bool=?,
    ~childrenColumnName: array(string)=?,
    ~columns: array(resolvedColumnParams)=?,
    ~dataSource: 'a=?,
    ~loading: bool=?,
    ~pagination: Js.t({..})=?,
    ~onRow: (Js.t({..}), int) => mouseEvents=?,
    ~id: string=?,
    ~size: option(string)=?,
    ~scroll: scrollTranspiled=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/table";

[@react.component]
let make =
    (
      ~bordered: option(bool)=?,
      ~childrenColumnName: option(array(string))=?,
      ~columns: option(array(columnParams))=?,
      ~dataSource: option('a)=?,
      ~loading: option(bool)=?,
      ~pagination: option(Js.t({..}))=?,
      ~onRow: option((Js.t({..}), int) => mouseEvents)=?,
      ~size: option(sizeType)=?,
      ~scroll: option(scroll)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsTable(
      ~bordered?,
      ~childrenColumnName?,
      ~columns=
        Belt.Option.getWithDefault(columns, [||])
        ->Belt.Array.map(parseColumnProps),
      ~dataSource?,
      ~loading?,
      ~pagination?,
      ~onRow?,
      ~size=Belt.Option.map(size, sizeTypeToJs),
      ~scroll=transpileScroll(scroll),
      ~id?,
      ~className?,
      ~style?,
      (),
    ),
  );