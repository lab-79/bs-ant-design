open Antd;

let str = React.string;

let routes: array(Breadcrumb.route) = [|
  {"path": "index", "breadcrumbName": "home"},
  {"path": "first", "breadcrumbName": "first"},
  {"path": "second", "breadcrumbName": "second"},
|];

let itemRender =
    (
      route: Breadcrumb.route,
      params,
      routes: array(Breadcrumb.route),
      paths: array(string),
    ) => {
  let isLast =
    routes |> Js.Array.indexOf(route) === StdLabels.Array.length(routes) - 1;
  isLast
    ? <span> {route##breadcrumbName |> str} </span>
    : <span> {String.concat(" / ", paths |> Array.to_list) |> str} </span>;
};

let overlay =
  <Menu>
    <Menu.Item>
      <a
        target="_blank"
        rel="noopener noreferrer"
        href="http://www.alipay.com/">
        {"General" |> str}
      </a>
    </Menu.Item>
    <Menu.Item>
      <a
        target="_blank"
        rel="noopener noreferrer"
        href="http://www.taobao.com/">
        {"Layout" |> str}
      </a>
    </Menu.Item>
    <Menu.Item>
      <a
        target="_blank" rel="noopener noreferrer" href="http://www.tmall.com/">
        {"Navigation" |> str}
      </a>
    </Menu.Item>
  </Menu>;

[@react.component]
let make = () =>
  <Section name="Breadcrumb">
    <Breadcrumb>
      <Breadcrumb.Item> {"Home" |> str} </Breadcrumb.Item>
      <Breadcrumb.Item>
        <a href=""> {"Application Center" |> str} </a>
      </Breadcrumb.Item>
      <Breadcrumb.Item>
        <a href=""> {"Application List" |> str} </a>
      </Breadcrumb.Item>
      <Breadcrumb.Item> {"An Application" |> str} </Breadcrumb.Item>
    </Breadcrumb>
    <Breadcrumb>
      <Breadcrumb.Item href="">
        <IconUnsafe _type=IconName.home />
      </Breadcrumb.Item>
      <Breadcrumb.Item href="">
        <IconUnsafe _type=IconName.user />
        <span> {"Application List" |> str} </span>
      </Breadcrumb.Item>
      <Breadcrumb.Item> {"Application" |> str} </Breadcrumb.Item>
    </Breadcrumb>
    <Breadcrumb itemRender routes />
    <div>
      <Breadcrumb>
        <Breadcrumb.Item> {"Ant Design" |> str} </Breadcrumb.Item>
        <Breadcrumb.Item>
          <a href=""> {"Component" |> str} </a>
        </Breadcrumb.Item>
        <Breadcrumb.Item overlay>
          <a href=""> {"General" |> str} </a>
        </Breadcrumb.Item>
        <Breadcrumb.Item> {"Button" |> str} </Breadcrumb.Item>
      </Breadcrumb>
    </div>
  </Section>;