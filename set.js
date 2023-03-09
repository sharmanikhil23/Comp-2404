function Set() {
  this.collection = [];
  this.add = addElement;
  this.remove = removeElement;
  this.toString = function () {
    return this.collection.toString();
  };
}

function addElement(x) {
  //add element x if no current element === x
  for (let i = 0; i < this.collection.length; i++) {
    if (x === this.collection[i]) return;
  }
  this.collection.push(x);
}

function removeElement(x) {
  //remove any elements === x
  let foundItemsToRemove = false;
  for (let i = 0; i < this.collection.length; i++) {
    if (x === this.collection[i]) foundItemsToRemove = true;
  }

  if (foundItemsToRemove) {
    temp = this.collection;
    this.collection = [];
    for (let i = 0; i < temp.length; i++) {
      if (x !== temp[i]) this.collection.push(temp[i]);
    }
  }
}

module.exports = Set;
