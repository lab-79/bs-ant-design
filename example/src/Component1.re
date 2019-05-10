let str = React.string;

module Styles = {
  open Css;

  let alert = style([width(`px(300))]);
};

[@react.component]
let make = () =>
  <React.Fragment>
    <Alert />
    <AutoComplete />
    <Avatar />
    <Badge />
    <Breadcrumb />
    <Button />
    <Calendar />
    <Card />
    <Carousel />
    <Checkbox />
    <Collapse />
    <DatePicker />
    <Dropdown />
    <Form />
    <Input />
    <Modal />
    <Pagination />
    <Radio />
    <Rate />
    <Table />
    <Tooltip />
    <TreeSelect />
  </React.Fragment>;